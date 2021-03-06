/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeUI/HomeUI-Structs.h>
@class HUQuickControlCollectionViewLayoutSupplementarySectionSettings;

@interface HUQuickControlCollectionViewSupplementaryLayoutInfo : NSObject {

	unsigned long long _itemSize;
	HUQuickControlCollectionViewLayoutSupplementarySectionSettings* _settings;
	CGRect _contentFrame;
	UIEdgeInsets _preferredLayoutAreaInset;

}

@property (assign,nonatomic) CGRect contentFrame;                                                                    //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long itemSize;                                                            //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredLayoutAreaInset;                                                  //@synthesize preferredLayoutAreaInset=_preferredLayoutAreaInset - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewLayoutSupplementarySectionSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(void)setPreferredLayoutAreaInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)preferredLayoutAreaInset;
-(HUQuickControlCollectionViewLayoutSupplementarySectionSettings *)settings;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(unsigned long long)itemSize;
-(void)setItemSize:(unsigned long long)arg1 ;
-(void)setSettings:(HUQuickControlCollectionViewLayoutSupplementarySectionSettings *)arg1 ;
@end

