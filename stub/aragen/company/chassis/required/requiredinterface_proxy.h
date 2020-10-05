/* This file contains ARA Function Cluster ara::com stub implementation.
   This implementation can be used to compile the generated code
   in Simulink. When deploying the generated code outside of Simulink,
   replace this file with an appropriate ARA file.

   Code generated for Simulink Adaptive model: "LaneGuidance"
   AUTOSAR AP Release: "19-03"
   On: "05-Oct-2020 19:52:08"  */

#ifndef COMPANY_CHASSIS_REQUIRED_REQUIREDINTERFACE_PROXY_H_
#define COMPANY_CHASSIS_REQUIRED_REQUIREDINTERFACE_PROXY_H_
#include <memory>
#include <vector>
#include <utility>
#include "requiredinterface_common.h"

namespace company
{
  namespace chassis
  {
    namespace required
    {
      namespace proxy
      {
        namespace events
        {
          class LeftLaneDistance {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                ProxyEventMiddlewareBase<SampleType>>(new ara::com::
                ProxyUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Subscribe(size_t cacheSize)
            {
              mEventMiddleware->Subscribe(cacheSize);
            }

            ara::core::Result<size_t> GetFreeSampleCount() const noexcept
            {
              return mEventMiddleware->GetFreeSampleCount();
            }
              template <typename F>
              ara::core::Result<size_t> GetNewSamples(F&& f, size_t
              maxNumberOfSamples = std::numeric_limits<size_t>::max())
            {
              return mEventMiddleware->GetNewSamples(std::move(f),
                maxNumberOfSamples);
            }

            void Unsubscribe()
            {
              mEventMiddleware->Unsubscribe();
            }

            void SetReceiveHandler(ara::com::EventReceiveHandler handler)
            {
              mEventMiddleware->SetReceiveHandler(handler);
            }

            void UnsetReceiveHandler()
            {
              mEventMiddleware->UnsetReceiveHandler();
            }

            void SetSubscriptionStateChangeHandler(ara::com::
              SubscriptionStateChangeHandler handler)
            {
              mEventMiddleware->SetSubscriptionStateChangeHandler(handler);
            }

            void UnsetSubscriptionStateChangeHandler()
            {
              mEventMiddleware->UnsetSubscriptionStateChangeHandler();
            }

           private:
            std::shared_ptr<ara::com::ProxyEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class LeftLaneDistance

          class LeftTurnIndicator {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                ProxyEventMiddlewareBase<SampleType>>(new ara::com::
                ProxyUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Subscribe(size_t cacheSize)
            {
              mEventMiddleware->Subscribe(cacheSize);
            }

            ara::core::Result<size_t> GetFreeSampleCount() const noexcept
            {
              return mEventMiddleware->GetFreeSampleCount();
            }
              template <typename F>
              ara::core::Result<size_t> GetNewSamples(F&& f, size_t
              maxNumberOfSamples = std::numeric_limits<size_t>::max())
            {
              return mEventMiddleware->GetNewSamples(std::move(f),
                maxNumberOfSamples);
            }

            void Unsubscribe()
            {
              mEventMiddleware->Unsubscribe();
            }

            void SetReceiveHandler(ara::com::EventReceiveHandler handler)
            {
              mEventMiddleware->SetReceiveHandler(handler);
            }

            void UnsetReceiveHandler()
            {
              mEventMiddleware->UnsetReceiveHandler();
            }

            void SetSubscriptionStateChangeHandler(ara::com::
              SubscriptionStateChangeHandler handler)
            {
              mEventMiddleware->SetSubscriptionStateChangeHandler(handler);
            }

            void UnsetSubscriptionStateChangeHandler()
            {
              mEventMiddleware->UnsetSubscriptionStateChangeHandler();
            }

           private:
            std::shared_ptr<ara::com::ProxyEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class LeftTurnIndicator

          class RightLaneDistance {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                ProxyEventMiddlewareBase<SampleType>>(new ara::com::
                ProxyUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Subscribe(size_t cacheSize)
            {
              mEventMiddleware->Subscribe(cacheSize);
            }

            ara::core::Result<size_t> GetFreeSampleCount() const noexcept
            {
              return mEventMiddleware->GetFreeSampleCount();
            }
              template <typename F>
              ara::core::Result<size_t> GetNewSamples(F&& f, size_t
              maxNumberOfSamples = std::numeric_limits<size_t>::max())
            {
              return mEventMiddleware->GetNewSamples(std::move(f),
                maxNumberOfSamples);
            }

            void Unsubscribe()
            {
              mEventMiddleware->Unsubscribe();
            }

            void SetReceiveHandler(ara::com::EventReceiveHandler handler)
            {
              mEventMiddleware->SetReceiveHandler(handler);
            }

            void UnsetReceiveHandler()
            {
              mEventMiddleware->UnsetReceiveHandler();
            }

            void SetSubscriptionStateChangeHandler(ara::com::
              SubscriptionStateChangeHandler handler)
            {
              mEventMiddleware->SetSubscriptionStateChangeHandler(handler);
            }

            void UnsetSubscriptionStateChangeHandler()
            {
              mEventMiddleware->UnsetSubscriptionStateChangeHandler();
            }

           private:
            std::shared_ptr<ara::com::ProxyEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class RightLaneDistance

          class RightTurnIndicator {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                ProxyEventMiddlewareBase<SampleType>>(new ara::com::
                ProxyUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Subscribe(size_t cacheSize)
            {
              mEventMiddleware->Subscribe(cacheSize);
            }

            ara::core::Result<size_t> GetFreeSampleCount() const noexcept
            {
              return mEventMiddleware->GetFreeSampleCount();
            }
              template <typename F>
              ara::core::Result<size_t> GetNewSamples(F&& f, size_t
              maxNumberOfSamples = std::numeric_limits<size_t>::max())
            {
              return mEventMiddleware->GetNewSamples(std::move(f),
                maxNumberOfSamples);
            }

            void Unsubscribe()
            {
              mEventMiddleware->Unsubscribe();
            }

            void SetReceiveHandler(ara::com::EventReceiveHandler handler)
            {
              mEventMiddleware->SetReceiveHandler(handler);
            }

            void UnsetReceiveHandler()
            {
              mEventMiddleware->UnsetReceiveHandler();
            }

            void SetSubscriptionStateChangeHandler(ara::com::
              SubscriptionStateChangeHandler handler)
            {
              mEventMiddleware->SetSubscriptionStateChangeHandler(handler);
            }

            void UnsetSubscriptionStateChangeHandler()
            {
              mEventMiddleware->UnsetSubscriptionStateChangeHandler();
            }

           private:
            std::shared_ptr<ara::com::ProxyEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class RightTurnIndicator

          class LeftCarInBlindSpot {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                ProxyEventMiddlewareBase<SampleType>>(new ara::com::
                ProxyUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Subscribe(size_t cacheSize)
            {
              mEventMiddleware->Subscribe(cacheSize);
            }

            ara::core::Result<size_t> GetFreeSampleCount() const noexcept
            {
              return mEventMiddleware->GetFreeSampleCount();
            }
              template <typename F>
              ara::core::Result<size_t> GetNewSamples(F&& f, size_t
              maxNumberOfSamples = std::numeric_limits<size_t>::max())
            {
              return mEventMiddleware->GetNewSamples(std::move(f),
                maxNumberOfSamples);
            }

            void Unsubscribe()
            {
              mEventMiddleware->Unsubscribe();
            }

            void SetReceiveHandler(ara::com::EventReceiveHandler handler)
            {
              mEventMiddleware->SetReceiveHandler(handler);
            }

            void UnsetReceiveHandler()
            {
              mEventMiddleware->UnsetReceiveHandler();
            }

            void SetSubscriptionStateChangeHandler(ara::com::
              SubscriptionStateChangeHandler handler)
            {
              mEventMiddleware->SetSubscriptionStateChangeHandler(handler);
            }

            void UnsetSubscriptionStateChangeHandler()
            {
              mEventMiddleware->UnsetSubscriptionStateChangeHandler();
            }

           private:
            std::shared_ptr<ara::com::ProxyEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class LeftCarInBlindSpot

          class RightCarInBlindSpot {
           public:
            using SampleType = Double;
            template <typename... Args>
              void InitImpl(Args... args)
            {
              mEventMiddleware = std::shared_ptr<ara::com::
                ProxyEventMiddlewareBase<SampleType>>(new ara::com::
                ProxyUDEventMiddleware<SampleType>{ args... });
            }

            void DeinitImpl()
            {
              mEventMiddleware.reset();
            }

            void Subscribe(size_t cacheSize)
            {
              mEventMiddleware->Subscribe(cacheSize);
            }

            ara::core::Result<size_t> GetFreeSampleCount() const noexcept
            {
              return mEventMiddleware->GetFreeSampleCount();
            }
              template <typename F>
              ara::core::Result<size_t> GetNewSamples(F&& f, size_t
              maxNumberOfSamples = std::numeric_limits<size_t>::max())
            {
              return mEventMiddleware->GetNewSamples(std::move(f),
                maxNumberOfSamples);
            }

            void Unsubscribe()
            {
              mEventMiddleware->Unsubscribe();
            }

            void SetReceiveHandler(ara::com::EventReceiveHandler handler)
            {
              mEventMiddleware->SetReceiveHandler(handler);
            }

            void UnsetReceiveHandler()
            {
              mEventMiddleware->UnsetReceiveHandler();
            }

            void SetSubscriptionStateChangeHandler(ara::com::
              SubscriptionStateChangeHandler handler)
            {
              mEventMiddleware->SetSubscriptionStateChangeHandler(handler);
            }

            void UnsetSubscriptionStateChangeHandler()
            {
              mEventMiddleware->UnsetSubscriptionStateChangeHandler();
            }

           private:
            std::shared_ptr<ara::com::ProxyEventMiddlewareBase<SampleType>>
              mEventMiddleware;
          };                           // class RightCarInBlindSpot
        }                              /* namespace events */

        namespace methods
        {
        }                              /* namespace methods */

        class RequiredInterfaceProxy {
         public:
          class HandleType {
           public:
            ara::com::InstanceIdentifier mInstanceID;
            std::string mMdlwareIP, mMdlwarePort;
            HandleType(const std::string& mdlIP, std::string& mdlPort, const ara::
                       com::InstanceIdentifier& InstID): mMdlwareIP{
              mdlIP
            }, mMdlwarePort
            {
              mdlPort
            }, mInstanceID{
              InstID.toString()
            }

              {
              }

              bool operator==(const HandleType& other) const
              {
                return ((this->mInstanceID == other.mInstanceID) &&
                        (this->mMdlwareIP == other.mMdlwareIP) &&
                        (this->mMdlwarePort == other.mMdlwarePort));
              }

              bool operator<(const HandleType& other) const
              {
                bool bRet = false;
                if (this->mInstanceID < other.mInstanceID) {
                  bRet = true;
                }                      /* if */

                return bRet;
              }

              HandleType& operator= (const HandleType& other)
              {
                this->mMdlwareIP = other.mMdlwareIP;
                this->mMdlwarePort = other.mMdlwarePort;
                this->mInstanceID = other.mInstanceID;
                return *this;
              }

              const ara::com::InstanceIdentifier& GetInstanceId() const
              {
                return mInstanceID;
              }
            };                         //class Handle Type

            HandleType mHandle;
            explicit RequiredInterfaceProxy(HandleType &handle):
              mHandle{
              handle.mMdlwareIP, handle.mMdlwarePort, handle.GetInstanceId()
            }

              {
                std::string lInstanceID{
                  mHandle.GetInstanceId().toString().data(),
                    mHandle.GetInstanceId().toString().size()
                }

                  ;
                  LeftLaneDistance.InitImpl(lInstanceID, mHandle.mMdlwareIP,
                    mHandle.mMdlwarePort);
                  LeftTurnIndicator.InitImpl(lInstanceID, mHandle.mMdlwareIP,
                    mHandle.mMdlwarePort);
                  RightLaneDistance.InitImpl(lInstanceID, mHandle.mMdlwareIP,
                    mHandle.mMdlwarePort);
                  RightTurnIndicator.InitImpl(lInstanceID, mHandle.mMdlwareIP,
                    mHandle.mMdlwarePort);
                  LeftCarInBlindSpot.InitImpl(lInstanceID, mHandle.mMdlwareIP,
                    mHandle.mMdlwarePort);
                  RightCarInBlindSpot.InitImpl(lInstanceID, mHandle.mMdlwareIP,
                    mHandle.mMdlwarePort);
                }
                  virtual ~RequiredInterfaceProxy()
{
                  LeftLaneDistance.DeinitImpl();
                  LeftTurnIndicator.DeinitImpl();
                  RightLaneDistance.DeinitImpl();
                  RightTurnIndicator.DeinitImpl();
                  LeftCarInBlindSpot.DeinitImpl();
                  RightCarInBlindSpot.DeinitImpl();
                }

                static ara::com::ServiceHandleContainer<RequiredInterfaceProxy::
                  HandleType> FindService(ara::com::InstanceIdentifier instance =
                  ara::com::InstanceIdentifier::Any)
                {
                  ara::com::ServiceHandleContainer<RequiredInterfaceProxy::
                    HandleType> retResult;
                  bool bHasError;
                  std::string lCommMgmtIP = "127.0.0.1", lCommMgmtPort = "4040",
                    lServiceID = "UD", lInstanceID{ instance.toString().data(),
                    instance.toString().size() };

                  std::tuple<std::string, std::string, int> tupRet{
                    "", "", 0
                  };

                  if (!bHasError && (std::get<2>(tupRet) != -1)) {
                    ara::com::InstanceIdentifier updatedInstance{
                      (std::get<0>(tupRet)).c_str()
                    }

                      ;
                      std::string sPort = std::to_string(std::get<2>(tupRet));
                      retResult.emplace_back(std::get<1>(tupRet), sPort,
                        updatedInstance);
                    } else
                    {
                      retResult.emplace_back(lCommMgmtIP, lCommMgmtPort,
                        instance);
                    }                  /* if */

                    return retResult;
                  }

                  static ara::com::ServiceHandleContainer<RequiredInterfaceProxy::
                    HandleType> FindService(ara::core::InstanceSpecifier
                    instanceSpec)
                  {
                    ara::com::ServiceHandleContainer<RequiredInterfaceProxy::
                      HandleType> retResult;
                    ara::com::InstanceIdentifierContainer vecInstance = ara::com::
                      runtime::ResolveInstanceIDs(instanceSpec);
                    if (!vecInstance.empty()) {
                      retResult = FindService(vecInstance.front());
                    } else {
                      retResult = FindService(ara::com::InstanceIdentifier::Any);
                    }                  /* if */

                    return retResult;
                  }

                  static ara::com::FindServiceHandle StartFindService(ara::com::
                    FindServiceHandler<RequiredInterfaceProxy::HandleType>
                    handler, ara::com::InstanceIdentifier instance = ara::com::
                    InstanceIdentifier::Any)
                  {
                    ara::com::FindServiceHandle retHandle;
                    return retHandle;
                  }

                  static ara::com::FindServiceHandle StartFindService(ara::com::
                    FindServiceHandler<RequiredInterfaceProxy::HandleType>
                    handler, ara::core::InstanceSpecifier instanceSpec)
                  {
                    ara::com::InstanceIdentifierContainer vecInstance = ara::com::
                      runtime::ResolveInstanceIDs(instanceSpec);
                    if (!vecInstance.empty()) {
                      return StartFindService(handler, vecInstance.front());
                    } else {
                      return StartFindService(handler, ara::com::
                        InstanceIdentifier::Any);
                    }                  /* if */
                  }

                  static void StopFindService(ara::com::FindServiceHandle handle)
                  {
                  }

                  RequiredInterfaceProxy::HandleType GetHandle() const
                  {
                    return mHandle;
                  }

                  company::chassis::required::proxy::events::LeftLaneDistance
                    LeftLaneDistance;
                  company::chassis::required::proxy::events::LeftTurnIndicator
                    LeftTurnIndicator;
                  company::chassis::required::proxy::events::RightLaneDistance
                    RightLaneDistance;
                  company::chassis::required::proxy::events::RightTurnIndicator
                    RightTurnIndicator;
                  company::chassis::required::proxy::events::LeftCarInBlindSpot
                    LeftCarInBlindSpot;
                  company::chassis::required::proxy::events::RightCarInBlindSpot
                    RightCarInBlindSpot;
                 private:
                }

                ;                      //class Proxy
              }                        /* namespace proxy */
            }                          /* namespace required */
          }                            /* namespace chassis */
          }                            /* namespace company */
#endif                                 // #ifndef COMPANY_CHASSIS_REQUIRED_REQUIREDINTERFACE_PROXY_H_
