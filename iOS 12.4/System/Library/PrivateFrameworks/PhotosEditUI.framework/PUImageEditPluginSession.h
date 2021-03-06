/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PUEditPluginSession.h>

@interface PUImageEditPluginSession : PUEditPluginSession {

	BOOL _allowLivePhotoExtensions;

}

@property (assign,nonatomic) BOOL allowLivePhotoExtensions;              //@synthesize allowLivePhotoExtensions=_allowLivePhotoExtensions - In the implementation block
-(void)setAllowLivePhotoExtensions:(BOOL)arg1 ;
-(BOOL)allowLivePhotoExtensions;
-(void)shouldLaunchPlugin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageDataSource;
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
@end

