/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIPostPlayConfig, VUINowPlayingConfig, VUIAutoPlayConfig;

@interface VUIFeaturesConfiguration : NSObject {

	VUIPostPlayConfig* _postPlayConfig;
	VUINowPlayingConfig* _nowPlayingConfig;
	VUIAutoPlayConfig* _autoPlayConfig;

}

@property (nonatomic,readonly) VUIPostPlayConfig * postPlayConfig;                  //@synthesize postPlayConfig=_postPlayConfig - In the implementation block
@property (nonatomic,readonly) VUINowPlayingConfig * nowPlayingConfig;              //@synthesize nowPlayingConfig=_nowPlayingConfig - In the implementation block
@property (nonatomic,readonly) VUIAutoPlayConfig * autoPlayConfig;                  //@synthesize autoPlayConfig=_autoPlayConfig - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)updateWithDictionary:(id)arg1 ;
-(VUINowPlayingConfig *)nowPlayingConfig;
-(VUIPostPlayConfig *)postPlayConfig;
-(VUIAutoPlayConfig *)autoPlayConfig;
@end

