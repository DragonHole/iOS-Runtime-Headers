/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantSettingsSupport/AssistantSettingsSupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, NSString;

@interface AssistantTightFooterView : UIView <PSHeaderFooterView> {

	UILabel* _textLabel;
	NSString* _text;

}

@property (nonatomic,readonly) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(UIEdgeInsets)textInsets;
-(void)_formatText;
@end

