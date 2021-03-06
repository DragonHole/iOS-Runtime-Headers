/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class UILayoutGuide, NTKUpNextImageView, NTKColoringLabel, CLKFont, NSArray, NSLayoutConstraint;

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell {

	UILayoutGuide* _labelLayoutGuide;
	UILayoutGuide* _imageLayoutGuide;
	NTKUpNextImageView* _imageView;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _descriptionLine1Label;
	NTKColoringLabel* _descriptionLine2Label;
	NTKColoringLabel* _descriptionLine3Label;
	CLKFont* _standardFont;
	CLKFont* _italicFont;
	CLKFont* _boldFont;
	NSArray* _withHeaderConstraints;
	NSArray* _withoutHeaderConstraints;
	NSArray* _withDescription2Constraints;
	NSArray* _withoutDescription2Constraints;
	NSArray* _withDescription3Constraints;
	NSArray* _withoutDescription3Constraints;
	NSLayoutConstraint* _imageLayoutGuideWidthConstraint;
	NSLayoutConstraint* _imageLayoutGuideHeightConstraint;
	BOOL _showingHeader;
	BOOL _showingThirdLine;
	BOOL _showingSmallThumbnail;

}
+(CGSize)suggestedBodyImageSizeForDevice:(id)arg1 ;
-(void)configureWithContent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setPaused:(BOOL)arg1 ;
@end

