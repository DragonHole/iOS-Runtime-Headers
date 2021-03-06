/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface HULinkedApplicationRatingView : UIView {

	double _rating;
	NSArray* _starViews;

}

@property (nonatomic,retain) NSArray * starViews;              //@synthesize starViews=_starViews - In the implementation block
@property (assign,nonatomic) double rating;                    //@synthesize rating=_rating - In the implementation block
-(double)rating;
-(void)setRating:(double)arg1 ;
-(void)setupConstraints;
-(void)setStarViews:(NSArray *)arg1 ;
-(void)updateStarViews;
-(NSArray *)starViews;
-(id)initWithFrame:(CGRect)arg1 ;
@end

