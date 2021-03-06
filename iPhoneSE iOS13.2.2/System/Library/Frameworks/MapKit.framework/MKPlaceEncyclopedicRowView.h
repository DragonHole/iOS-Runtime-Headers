/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, UILayoutGuide, NSArray;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {

	NSMutableArray* _factoidViews;
	UILayoutGuide* _insetMetricGuide;
	UILayoutGuide* _leftMetricGuide;
	UILayoutGuide* _rightMetricGuide;
	unsigned long long _columnCount;
	BOOL _isStandAlone;
	NSArray* _items;
	NSMutableArray* _labelConstraints;

}

@property (nonatomic,retain) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (assign,nonatomic) BOOL isStandAlone;                              //@synthesize isStandAlone=_isStandAlone - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_contentSizeDidChange;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(void)refreshContent:(BOOL)arg1 ;
-(void)refreshColumnCount;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
-(BOOL)isStandAlone;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(void)setIsStandAlone:(BOOL)arg1 ;
@end

