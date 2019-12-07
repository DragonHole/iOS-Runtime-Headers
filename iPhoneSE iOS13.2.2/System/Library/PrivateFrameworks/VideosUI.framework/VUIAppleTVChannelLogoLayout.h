/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

@interface VUIAppleTVChannelLogoLayout : TVViewLayout {

	TVImageLayout* _channelLogoImageLayout;
	VUITextLayout* _channelsTextLayout;

}

@property (nonatomic,retain) VUITextLayout * channelsTextLayout;                  //@synthesize channelsTextLayout=_channelsTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * channelLogoImageLayout;              //@synthesize channelLogoImageLayout=_channelLogoImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 ;
-(id)init;
-(TVImageLayout *)channelLogoImageLayout;
-(void)setChannelLogoImageLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)channelsTextLayout;
-(void)setChannelsTextLayout:(VUITextLayout *)arg1 ;
@end
