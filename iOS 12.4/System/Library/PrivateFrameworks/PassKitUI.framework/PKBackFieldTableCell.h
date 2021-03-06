/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPassField, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell {

	PKPassField* _field;
	UITextView* _valueTextView;
	BOOL _showLinks;

}

@property (nonatomic,retain) PKPassField * field;              //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) BOOL showLinks;                   //@synthesize showLinks=_showLinks - In the implementation block
+(id)valueFont;
+(id)_linkColor;
+(id)_linkTextAttributes;
+(id)reuseIdentifier;
+(id)titleFont;
-(void)setField:(PKPassField *)arg1 ;
-(void)setShowLinks:(BOOL)arg1 ;
-(id)initWithField:(id)arg1 showLinks:(BOOL)arg2 ;
-(void)_detectLinks;
-(void)_setupTextAttributes;
-(CGSize)_sizeForValueTextWithWidth:(double)arg1 ;
-(BOOL)showLinks;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPassField *)field;
@end

