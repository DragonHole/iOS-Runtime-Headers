/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString, NSMutableArray;

@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate> {

	NSString* _strippedString;
	NSMutableArray* _parts;

}

@property (nonatomic,readonly) NSMutableArray * parts;                 //@synthesize parts=_parts - In the implementation block
@property (nonatomic,readonly) NSString * strippedString;              //@synthesize strippedString=_strippedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithHTMLString:(id)arg1 ;
-(NSString *)strippedString;
-(id)stripHTMLString:(id)arg1 ;
-(NSMutableArray *)parts;
@end

