/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSMutableArray, NSAttributedString, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	IKTextParser* _textParser;
	NSMutableArray* _textBadges;
	NSMutableArray* _textBadgeElements;
	NSMutableArray* _textSpanElements;
	unsigned long long _textStyle;

}

@property (nonatomic,retain,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned long long textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long maxLines; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) UIColor * color; 
+(BOOL)shouldParseChildDOMElements;
-(id)accessibilityText;
-(void)appDocumentDidMarkStylesDirty;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(unsigned long long)_styleForTagName:(id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(NSArray *)badges;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 defaultAttributes:(id*)arg2 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id*)arg4 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(unsigned long long)alignment;
-(id)debugDescription;
-(NSAttributedString *)text;
-(UIColor *)color;
-(unsigned long long)textStyle;
-(id)attributedStringWithFont:(id)arg1 ;
-(long long)maxLines;
@end
