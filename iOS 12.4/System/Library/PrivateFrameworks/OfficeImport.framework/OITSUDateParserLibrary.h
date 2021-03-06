/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSULocale, NSMutableArray, NSCondition;

@interface OITSUDateParserLibrary : NSObject {

	OITSULocale* mLocale;
	unsigned long long mMaxPermittedParsers;
	unsigned long long mNumberOfUses;
	unsigned long long mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
-(id)initWithLocale:(id)arg1 ;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
-(void)prepareDateParserInBackground;
-(void)dealloc;
@end

