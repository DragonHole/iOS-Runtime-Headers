/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CNQuickActionButton;

@interface CNQuickActionCell : UICollectionViewCell {

	BOOL _showTitle;
	BOOL _showBackgroundPlatter;
	CNQuickActionButton* _button;

}

@property (nonatomic,retain) CNQuickActionButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL showTitle;                            //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(BOOL)showBackgroundPlatter;
-(void)setShowTitle:(BOOL)arg1 ;
-(BOOL)showTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(CNQuickActionButton *)button;
-(void)setButton:(CNQuickActionButton *)arg1 ;
@end
