/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSArray;

@interface TeaUI.ErrorView : UIView {

	 errorPosition;
	 model;
	 styler;
	 label;
	 scrollView;
	 visualEffectView;
	 keyboardObserver;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
-(NSString *)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
