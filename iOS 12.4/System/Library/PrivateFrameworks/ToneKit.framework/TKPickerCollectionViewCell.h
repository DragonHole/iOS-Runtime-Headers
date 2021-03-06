/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewTableCell.h>

@class UIColor;

@interface TKPickerCollectionViewCell : UICollectionViewTableCell {

	BOOL _shouldTintTextLabel;
	UIColor* _textLabelColor;

}

@property (nonatomic,retain) UIColor * textLabelColor;              //@synthesize textLabelColor=_textLabelColor - In the implementation block
@property (assign,nonatomic) BOOL shouldTintTextLabel;              //@synthesize shouldTintTextLabel=_shouldTintTextLabel - In the implementation block
-(void)_updateTextLabelColor;
-(void)setTextLabelColor:(UIColor *)arg1 ;
-(void)setShouldTintTextLabel:(BOOL)arg1 ;
-(BOOL)shouldTintTextLabel;
-(void)tintColorDidChange;
-(UIColor *)textLabelColor;
@end

