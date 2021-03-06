/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMStillImageCaptureRequest, CAMVideoCaptureResult;

@interface CAMIrisVideoControllerJob : NSObject {

	CAMStillImageCaptureRequest* _request;
	CAMVideoCaptureResult* _videoCaptureResult;

}

@property (nonatomic,readonly) CAMStillImageCaptureRequest * request;                   //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CAMVideoCaptureResult * videoCaptureResult;              //@synthesize videoCaptureResult=_videoCaptureResult - In the implementation block
-(id)initWithRequest:(id)arg1 videoCaptureResult:(id)arg2 ;
-(CAMVideoCaptureResult *)videoCaptureResult;
-(CAMStillImageCaptureRequest *)request;
@end

