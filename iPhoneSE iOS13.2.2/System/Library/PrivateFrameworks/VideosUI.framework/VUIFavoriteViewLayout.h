/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, TVImageLayout;

@interface VUIFavoriteViewLayout : TVViewLayout {

	long long _layoutType;
	VUITextLayout* _titleTextLayout;
	TVImageLayout* _logoImageLayout;
	TVImageLayout* _accessoryImageLayout;

}

@property (nonatomic,readonly) long long layoutType;                              //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleTextLayout;                   //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * logoImageLayout;                   //@synthesize logoImageLayout=_logoImageLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * accessoryImageLayout;              //@synthesize accessoryImageLayout=_accessoryImageLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)initWithType:(long long)arg1 ;
-(long long)layoutType;
-(VUITextLayout *)titleTextLayout;
-(TVImageLayout *)logoImageLayout;
-(TVImageLayout *)accessoryImageLayout;
@end

