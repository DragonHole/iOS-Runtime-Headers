/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class UIImageView, _MKUILabel, NSLayoutConstraint, MKPlaceReviewAvatarGenerator, NSString, NSDate;

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {

	UIImageView* _pictureView;
	_MKUILabel* _detailLabel;
	_MKUILabel* _reviewLabel;
	NSLayoutConstraint* _reviewLabelTopConstraint;
	NSLayoutConstraint* _reviewLabelToAuthorLabelConstraint;
	NSLayoutConstraint* _authorLabelBaselineConstraint;
	BOOL _isLastReview;
	MKPlaceReviewAvatarGenerator* _avatarGenerator;
	unsigned long long _rating;
	NSString* _author;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned long long rating;                                   //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * author;                                             //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL isLastReview;                                           //@synthesize isLastReview=_isLastReview - In the implementation block
@property (nonatomic,retain) MKPlaceReviewAvatarGenerator * avatarGenerator;              //@synthesize avatarGenerator=_avatarGenerator - In the implementation block
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_contentSizeDidChange;
-(unsigned long long)rating;
-(void)setRating:(unsigned long long)arg1 ;
-(void)setReview:(id)arg1 ;
-(void)setReviewText:(id)arg1 ;
-(void)setPicture:(id)arg1 ;
-(void)_updatePictureTheme:(id)arg1 ;
-(void)_updateBaselineConstraints;
-(id)detailLabelText;
-(void)infoCardThemeChanged;
-(unsigned long long)maxCharacters;
-(void)setIsLastReview:(BOOL)arg1 ;
-(BOOL)isLastReview;
-(MKPlaceReviewAvatarGenerator *)avatarGenerator;
-(void)setAvatarGenerator:(MKPlaceReviewAvatarGenerator *)arg1 ;
@end

