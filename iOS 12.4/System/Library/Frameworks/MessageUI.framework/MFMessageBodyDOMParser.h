/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class DOMDocument;

@interface MFMessageBodyDOMParser : MFMessageBodyParser {

	DOMDocument* _document;

}
+(BOOL)documentContainsAnyQuotation:(id)arg1 ;
-(BOOL)parse;
-(id)initWithDOMDocument:(id)arg1 ;
-(void)_consumeAccumulatedNodes:(id)arg1 ;
-(Class)messageBodyElementClass;
-(id)rangeForElement:(id)arg1 ;
-(void)extendRange:(id)arg1 toElement:(id)arg2 ;
-(id)rangeFromElement:(id)arg1 toElement:(id)arg2 ;
-(void)dealloc;
@end
