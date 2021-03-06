/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPTextStyleable.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class UILabel, LPImageView, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {

	UILabel* _textView;
	UIEdgeInsets _contentInset;
	LPImageView* _glyphView;
	LPTextViewStyle* _style;

}

@property (nonatomic,retain,readonly) LPTextViewStyle * style; 
-(void)layoutComponentView;
-(id)initWithText:(id)arg1 style:(id)arg2 ;
-(double)firstLineLeading;
-(id)_createTextViewWithAttributedString:(id)arg1 style:(id)arg2 ;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)descender;
-(LPTextViewStyle *)style;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(double)ascender;
-(UIEdgeInsets)_effectiveContentInset;
@end

