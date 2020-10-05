/* This file contains ARA Function Cluster ara::com stub implementation.
   This implementation can be used to compile the generated code
   in Simulink. When deploying the generated code outside of Simulink,
   replace this file with an appropriate ARA file.

   Code generated for Simulink Adaptive model: "LaneGuidance"
   AUTOSAR AP Release: "19-03"
   On: "05-Oct-2020 19:52:08"  */

#ifndef COMPANY_CHASSIS_PROVIDED_PROVIDEDINTERFACE_SKELETON_H_
#define COMPANY_CHASSIS_PROVIDED_PROVIDEDINTERFACE_SKELETON_H_
#include <memory>
#include "providedinterface_common.h"

namespace company
{
  namespace chassis
  {
    namespace provided
    {
      namespace skeleton
      {
        namespace events
        {
          class LeftHazardIndicator {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                SkeletonEventMiddlewareBase<SampleType>>(new ara::com::
                SkeletonUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Send(const SampleType &data)
            {
              mEventMiddleware->Send(data);
            }

            ara::com::SampleAllocateePtr <SampleType> Allocate()
            {
              return mEventMiddleware->Allocate();
            }

            void Send(ara::com::SampleAllocateePtr <SampleType> data)
            {
              mEventMiddleware->Send(std::move(data));
            }

           private:
            std::shared_ptr<ara::com::SkeletonEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class LeftHazardIndicator

          class RightHazardIndicator {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                SkeletonEventMiddlewareBase<SampleType>>(new ara::com::
                SkeletonUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Send(const SampleType &data)
            {
              mEventMiddleware->Send(data);
            }

            ara::com::SampleAllocateePtr <SampleType> Allocate()
            {
              return mEventMiddleware->Allocate();
            }

            void Send(ara::com::SampleAllocateePtr <SampleType> data)
            {
              mEventMiddleware->Send(std::move(data));
            }

           private:
            std::shared_ptr<ara::com::SkeletonEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class RightHazardIndicator
        }                              /* namespace events */

        class ProvidedInterfaceSkeleton {
         public:
          ProvidedInterfaceSkeleton(ara::com::InstanceIdentifier instance, ara::
            com::MethodCallProcessingMode mode = ara::com::
            MethodCallProcessingMode::kEvent): mInstanceID{
            instance.toString().data(), instance.toString().size()
          }

            , mMethodProcMode{
              mode
            }
              ,mCommMgmtIP
            {
              "127.0.0.1"
            }, mCommMgmtPort{
              "4040"
            }
{
            }

            ProvidedInterfaceSkeleton(ara::core::InstanceSpecifier instanceSpec,
              ara::com::MethodCallProcessingMode mode = ara::com::
              MethodCallProcessingMode::kEvent): mMethodProcMode{
              mode
            }
              ,mCommMgmtIP
            {
              "127.0.0.1"
            }, mCommMgmtPort{
              "4040"
            }
{
              ara::com::InstanceIdentifierContainer vecInstance = ara::com::
                runtime::ResolveInstanceIDs(instanceSpec);
              if (!vecInstance.empty()) {
                mInstanceID = std::string{ vecInstance.front().toString().data(),
                  vecInstance.front().toString().size() };
              } else {
                ara::com::InstanceIdentifier tempId = ara::com::
                  InstanceIdentifier::Any;
                mInstanceID = std::string{ tempId.toString().data(),
                  tempId.toString().size() };
              }                        /* if */
            }

            virtual ~ProvidedInterfaceSkeleton()
            {
              StopOfferService();
            }

            ProvidedInterfaceSkeleton(const ProvidedInterfaceSkeleton&) = delete;
            ProvidedInterfaceSkeleton& operator = (const
              ProvidedInterfaceSkeleton&) = delete;
            ProvidedInterfaceSkeleton(ProvidedInterfaceSkeleton&& other) =
              default;
            ProvidedInterfaceSkeleton& operator = (ProvidedInterfaceSkeleton&&
              other) = default;
            void OfferService()
            {
              bool bHasError;
              std::string lServiceID = "UD";
              LeftHazardIndicator.InitImpl(mInstanceID, mCommMgmtIP,
                mCommMgmtPort);
              RightHazardIndicator.InitImpl(mInstanceID, mCommMgmtIP,
                mCommMgmtPort);
            }

            void StopOfferService()
            {
              LeftHazardIndicator.DeinitImpl();
              RightHazardIndicator.DeinitImpl();
              bool bHasError;
              std::string lServiceID = "UD";
            }

            company::chassis::provided::skeleton::events::LeftHazardIndicator
              LeftHazardIndicator;
            company::chassis::provided::skeleton::events::RightHazardIndicator
              RightHazardIndicator;
           private:
            std::string mInstanceID;
            ara::com::MethodCallProcessingMode mMethodProcMode;
            std::string mCommMgmtIP;
            std::string mCommMgmtPort;
          };                           //class Skeleton
        }                              /* namespace skeleton */
      }                                /* namespace provided */
      }                                /* namespace chassis */
    }                                  /* namespace company */

#endif                                 //#ifndef COMPANY_CHASSIS_PROVIDED_PROVIDEDINTERFACE_SKELETON_H_
