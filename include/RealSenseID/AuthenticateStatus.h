// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2020-2021 Intel Corporation. All Rights Reserved.

#pragma once

#include "RealSenseIDExports.h"
#include "SerialStatus.h"

namespace RealSenseID
{
/**
 * Statuses returned from FaceAuthenticator authenticate operation.
 */

/// @brief Mathematical error code
enum class RSID_API AuthenticateStatus
{
    Success,
    BadFrameQuality,
    NoFaceDetected,
    FaceDetected,
    LedFlowSuccess,
    FaceIsTooFarToTheTop,
    FaceIsTooFarToTheBottom,
    FaceIsTooFarToTheRight,
    FaceIsTooFarToTheLeft,
    FaceTiltIsTooUp,
    FaceTiltIsTooDown,
    FaceTiltIsTooRight,
    FaceTiltIsTooLeft,
    FaceIsTooFarFromTheCamera,
    FaceIsTooCloseToTheCamera,
    CameraStarted,
    CameraStopped,
    Forbidden,
    DeviceError,
    Failure,
    /* serial statuses*/
    SerialOk = 100,
    SerialError,
    SerialSecurityError
};

/**
 * Return c string description of the status
 */
RSID_API const char* Description(AuthenticateStatus status);

template <typename OStream>
inline OStream& operator<<(OStream& os, const AuthenticateStatus& status)
{
    os << Description(status);
    return os;
}
} // namespace RealSenseID
