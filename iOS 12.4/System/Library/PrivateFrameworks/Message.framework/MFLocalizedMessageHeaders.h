/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageHeaders.h>

@interface MFLocalizedMessageHeaders : MFMessageHeaders
+(id)localizedHeaders;
+(id)localizedHeadersFromEnglishHeaders:(id)arg1 ;
+(id)englishHeadersFromLocalizedHeaders:(id)arg1 ;
-(id)copyFormattedHeaderValueFromAddressList:(id)arg1 ;
-(void)appendHeaderMarkupForKey:(id)arg1 value:(id)arg2 toString:(id)arg3 ;
-(id)markupString;
@end
