/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/APFormatter.h>

@interface UTF8Formatter : APFormatter {

	unsigned long long _maxByteCount;

}
+(id)utf8Formatter:(unsigned long long)arg1 ;
+(id)afpSet;
+(id)utf8Formatter;
+(id)utf8FormatterWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
+(id)afpFormatter:(unsigned long long)arg1 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)initWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initAFPFormatterWithLength:(unsigned long long)arg1 ;
-(void)setMaxByteCount:(unsigned long long)arg1 ;
-(unsigned long long)maxByteCount;
@end
