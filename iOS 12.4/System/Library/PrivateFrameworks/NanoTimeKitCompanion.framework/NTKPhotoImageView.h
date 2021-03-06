/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMediaAssetViewDelegate.h>

@protocol NTKPhotoImageViewDelegate;
@class CLKDevice, CLKMediaAssetView, NTKPhoto, NSURL, NSString;

@interface NTKPhotoImageView : UIView <CLKMediaAssetViewDelegate> {

	CLKDevice* _device;
	CLKMediaAssetView* _mediaAssetView;
	NTKPhoto* _photo;
	id<NTKPhotoImageViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKPhotoImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIris; 
@property (nonatomic,readonly) BOOL isIrisVideoHidden; 
@property (nonatomic,readonly) NSURL * irisURL; 
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPhotoIris;
-(void)prepareToPlayWithMode:(long long)arg1 ;
-(BOOL)isIrisVideoHidden;
-(void)interruptPlayback;
-(NSURL *)irisURL;
-(void)playWithMode:(long long)arg1 ;
-(void)resumeInterruptedPlayback;
-(void)pauseWithMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)setPhoto:(id)arg1 allowIris:(BOOL)arg2 ;
-(void)mediaAssetViewDidBeginPlaying:(id)arg1 ;
-(void)mediaAssetViewDidEndPlaying:(id)arg1 ;
-(void)setDelegate:(id<NTKPhotoImageViewDelegate>)arg1 ;
-(id<NTKPhotoImageViewDelegate>)delegate;
-(BOOL)isPlaying;
-(NSString *)localIdentifier;
@end

