/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureRequest.h>
#import <libobjc.A.dylib/CAMEffectFilterTypeProvider.h>
#import <libobjc.A.dylib/CAMBurstIdentifierProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/CAMBurstRequest.h>
#import <libobjc.A.dylib/CAMIrisRequest.h>
#import <libobjc.A.dylib/CAMTimelapseRequest.h>

@protocol CAMStillImageCaptureRequestDelegate;
@class NSString, NSArray, NSURL;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMEffectFilterTypeProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest> {

	NSString* _EV0PersistenceUUID;
	NSString* _timelapseIdentifier;
	long long _effectFilterType;
	long long _lightingEffectType;
	unsigned long long _maximumBurstLength;
	long long _flashMode;
	long long _hdrMode;
	long long _irisMode;
	BOOL _wantsPortraitEffect;
	NSArray* _adjustmentFilters;
	NSArray* _originalFilters;
	BOOL _usesStillImageStabilization;
	BOOL _wantsAutoDualCameraFusion;
	BOOL _wantsAudioForCapture;
	BOOL _wantsSquareCrop;
	BOOL _wantsHighResolutionStills;
	CGSize _desiredPreviewSize;
	NSString* _burstIdentifier;
	NSString* _irisIdentifier;
	NSURL* _localVideoDestinationURL;
	NSString* _videoPersistenceUUID;
	NSString* _EV0IrisIdentifier;
	NSURL* _EV0LocalVideoDestinationURL;
	NSString* _EV0VideoPersistenceUUID;
	unsigned long long _userInitiationTime;
	double _loggingVideoZoomFactor;
	long long _loggingZoomInteractionType;
	id<CAMStillImageCaptureRequestDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * EV0PersistenceUUID;                                   //@synthesize EV0PersistenceUUID=_EV0PersistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * timelapseIdentifier;                                  //@synthesize timelapseIdentifier=_timelapseIdentifier - In the implementation block
@property (nonatomic,readonly) long long effectFilterType;                                           //@synthesize effectFilterType=_effectFilterType - In the implementation block
@property (nonatomic,readonly) long long lightingEffectType;                                         //@synthesize lightingEffectType=_lightingEffectType - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumBurstLength;                                //@synthesize maximumBurstLength=_maximumBurstLength - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                                  //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                                                    //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) long long irisMode;                                                   //@synthesize irisMode=_irisMode - In the implementation block
@property (nonatomic,readonly) BOOL wantsPortraitEffect;                                             //@synthesize wantsPortraitEffect=_wantsPortraitEffect - In the implementation block
@property (nonatomic,readonly) NSArray * adjustmentFilters;                                          //@synthesize adjustmentFilters=_adjustmentFilters - In the implementation block
@property (nonatomic,readonly) NSArray * originalFilters;                                            //@synthesize originalFilters=_originalFilters - In the implementation block
@property (nonatomic,readonly) BOOL usesStillImageStabilization;                                     //@synthesize usesStillImageStabilization=_usesStillImageStabilization - In the implementation block
@property (nonatomic,readonly) BOOL wantsAutoDualCameraFusion;                                       //@synthesize wantsAutoDualCameraFusion=_wantsAutoDualCameraFusion - In the implementation block
@property (nonatomic,readonly) BOOL wantsAudioForCapture;                                            //@synthesize wantsAudioForCapture=_wantsAudioForCapture - In the implementation block
@property (nonatomic,readonly) BOOL wantsSquareCrop;                                                 //@synthesize wantsSquareCrop=_wantsSquareCrop - In the implementation block
@property (nonatomic,readonly) BOOL wantsHighResolutionStills;                                       //@synthesize wantsHighResolutionStills=_wantsHighResolutionStills - In the implementation block
@property (nonatomic,readonly) CGSize desiredPreviewSize;                                            //@synthesize desiredPreviewSize=_desiredPreviewSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                                      //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * irisIdentifier;                                       //@synthesize irisIdentifier=_irisIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localVideoDestinationURL;                                //@synthesize localVideoDestinationURL=_localVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoPersistenceUUID;                                 //@synthesize videoPersistenceUUID=_videoPersistenceUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * EV0IrisIdentifier;                                    //@synthesize EV0IrisIdentifier=_EV0IrisIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * EV0LocalVideoDestinationURL;                             //@synthesize EV0LocalVideoDestinationURL=_EV0LocalVideoDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * EV0VideoPersistenceUUID;                              //@synthesize EV0VideoPersistenceUUID=_EV0VideoPersistenceUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long userInitiationTime;                                //@synthesize userInitiationTime=_userInitiationTime - In the implementation block
@property (nonatomic,readonly) double loggingVideoZoomFactor;                                        //@synthesize loggingVideoZoomFactor=_loggingVideoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long loggingZoomInteractionType;                                 //@synthesize loggingZoomInteractionType=_loggingZoomInteractionType - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMStillImageCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)burstIdentifier;
-(long long)flashMode;
-(NSString *)videoPersistenceUUID;
-(NSString *)irisIdentifier;
-(long long)irisMode;
-(NSString *)EV0PersistenceUUID;
-(long long)effectFilterType;
-(unsigned long long)maximumBurstLength;
-(id)captureRequest;
-(long long)lightingEffectType;
-(double)loggingVideoZoomFactor;
-(long long)loggingZoomInteractionType;
-(id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2 ;
-(id)irisStillImagePersistenceUUIDForEV0:(BOOL)arg1 ;
-(id)irisVideoPersistenceUUIDForEV0:(BOOL)arg1 ;
-(BOOL)isEV0LocalVideoDestinationURL:(id)arg1 ;
-(id)irisIdentifierForEV0:(BOOL)arg1 ;
-(NSString *)EV0VideoPersistenceUUID;
-(BOOL)shouldPersistToLivePhotoDirectory;
-(NSArray *)adjustmentFilters;
-(id)irisLocalVideoDestinationURLForEV0:(BOOL)arg1 ;
-(BOOL)wantsPortraitEffect;
-(NSString *)timelapseIdentifier;
-(NSArray *)originalFilters;
-(BOOL)usesStillImageStabilization;
-(BOOL)wantsAutoDualCameraFusion;
-(BOOL)wantsAudioForCapture;
-(BOOL)wantsSquareCrop;
-(BOOL)wantsHighResolutionStills;
-(CGSize)desiredPreviewSize;
-(NSURL *)localVideoDestinationURL;
-(NSString *)EV0IrisIdentifier;
-(NSURL *)EV0LocalVideoDestinationURL;
-(unsigned long long)userInitiationTime;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CAMStillImageCaptureRequestDelegate>)delegate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)hdrMode;
@end

