/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMSetupSupport/SIMSetupSupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_queue, TSCellularPlanQRCodeScannerCaptureDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, NSObject, AVCaptureVideoPreviewLayer, NSString;

@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	AVCaptureVideoPreviewLayer* _previewLayer;
	BOOL _canUseCamera;
	id<TSCellularPlanQRCodeScannerCaptureDelegate> _delegate;

}

@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;                          //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,readonly) BOOL canUseCamera;                                                  //@synthesize canUseCamera=_canUseCamera - In the implementation block
@property (nonatomic,readonly) BOOL isRunning; 
@property (assign,nonatomic) id<TSCellularPlanQRCodeScannerCaptureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleRuntimeError:(id)arg1 ;
-(BOOL)canUseCamera;
-(void)startRunning;
-(void)_changeCameraConfiguration;
-(void)setupCameraSession;
-(void)autoFocusAtPoint:(CGPoint)arg1 ;
-(void)autoExposeAtPoint:(CGPoint)arg1 ;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)dealloc;
-(void)setDelegate:(id<TSCellularPlanQRCodeScannerCaptureDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<TSCellularPlanQRCodeScannerCaptureDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(id)initWithDelegate:(id)arg1 ;
-(void)stopRunning;
@end

