/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject {

	double _rowSpacing;
	double _interitemSpacingForSmallControlSize;
	double _interitemSpacingForRegularControlSize;
	double _minimumSectionSpacing;
	unsigned long long _preferredLayoutStyle;
	unsigned long long _titlePosition;

}

@property (assign,nonatomic) double rowSpacing;                                         //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacingForSmallControlSize;                //@synthesize interitemSpacingForSmallControlSize=_interitemSpacingForSmallControlSize - In the implementation block
@property (assign,nonatomic) double interitemSpacingForRegularControlSize;              //@synthesize interitemSpacingForRegularControlSize=_interitemSpacingForRegularControlSize - In the implementation block
@property (assign,nonatomic) double minimumSectionSpacing;                              //@synthesize minimumSectionSpacing=_minimumSectionSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long preferredLayoutStyle;                   //@synthesize preferredLayoutStyle=_preferredLayoutStyle - In the implementation block
@property (assign,nonatomic) unsigned long long titlePosition;                          //@synthesize titlePosition=_titlePosition - In the implementation block
+(id)defaultOptions;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(unsigned long long)titlePosition;
-(unsigned long long)preferredLayoutStyle;
-(void)setPreferredLayoutStyle:(unsigned long long)arg1 ;
-(double)interitemSpacingForSmallControlSize;
-(double)interitemSpacingForRegularControlSize;
-(double)minimumSectionSpacing;
-(void)setMinimumSectionSpacing:(double)arg1 ;
-(void)setInteritemSpacingForSmallControlSize:(double)arg1 ;
-(void)setInteritemSpacingForRegularControlSize:(double)arg1 ;
-(double)rowSpacing;
-(void)setRowSpacing:(double)arg1 ;
@end

