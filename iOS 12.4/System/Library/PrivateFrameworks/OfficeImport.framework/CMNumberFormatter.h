/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMNumberFormatter : NSObject {

	int _format;
	int _language;
	void* _numberFormatter;

}
+(id)formatterForNumberFormat:(int)arg1 language:(int)arg2 ;
-(id)stringForNumber:(unsigned long long)arg1 ;
-(id)initWithNumberFormat:(int)arg1 language:(int)arg2 ;
-(void)dealloc;
@end

