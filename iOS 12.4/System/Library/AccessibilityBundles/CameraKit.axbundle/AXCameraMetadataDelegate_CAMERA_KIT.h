/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol AVCaptureMetadataOutputObjectsDelegate;
@class NSString;

@interface AXCameraMetadataDelegate_CAMERA_KIT : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate> {

	id<AVCaptureMetadataOutputObjectsDelegate> _otherMetadataOutputDelegate;

}

@property (assign,nonatomic,__weak) id<AVCaptureMetadataOutputObjectsDelegate> otherMetadataOutputDelegate;              //@synthesize otherMetadataOutputDelegate=_otherMetadataOutputDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)_accessibilityHandleMetadataOutput:(id)arg1 ;
-(BOOL)markDetectionInProgress;
-(void)performDetectionsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleMetadataOutputFaces:(id)arg1 QRCodes:(id)arg2 ;
-(void)markDetectionFinished;
-(id<AVCaptureMetadataOutputObjectsDelegate>)otherMetadataOutputDelegate;
-(void)updateAccessibleFaceElementsWithFaces:(id)arg1 ;
-(void)setOtherMetadataOutputDelegate:(id<AVCaptureMetadataOutputObjectsDelegate>)arg1 ;
-(void)dealloc;
@end

