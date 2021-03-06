/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout;

@interface VUIProductUberBackgroundViewLayout : TVViewLayout {

	long long _sizeClass;
	BOOL _isSport;
	TVImageLayout* _imageLayout;

}

@property (nonatomic,readonly) TVImageLayout * imageLayout;              //@synthesize imageLayout=_imageLayout - In the implementation block
+(double)uberImageAspectRatioForWindowWidth:(double)arg1 ;
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 isSport:(BOOL)arg4 ;
+(BOOL)uberImageShouldUseVerticalLayoutForWindowWidth:(double)arg1 ;
+(BOOL)uberImageShouldUsePhoneImageForSizeClass:(long long)arg1 ;
-(TVImageLayout *)imageLayout;
-(id)initWithSizeClass:(long long)arg1 isSport:(BOOL)arg2 ;
-(void)updateWithSizeClass:(long long)arg1 isSport:(BOOL)arg2 ;
@end

