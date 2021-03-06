/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUTitleViewStyler.h>

@class UIColor, NSString;

@interface NUNewsFeedTitleViewStyler : NSObject <NUTitleViewStyler> {

	UIColor* _textColor;
	long long _textAlignment;

}

@property (nonatomic,copy) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(CGSize)arg3 ;
-(id)initWithTextColor:(id)arg1 textAlignment:(long long)arg2 ;
-(id)styleTextAsMessage:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)styleTextAsTitle:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)messageLargeFont;
-(id)messageSmallFont;
-(id)titleParagraphStyleWithWrapping:(BOOL)arg1 ;
-(id)titleExtraLargeFont;
-(void)updateWithTextColor:(id)arg1 ;
-(id)init;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(long long)textAlignment;
@end

