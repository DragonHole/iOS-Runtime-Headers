/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLNLP : NSObject
+(id)stringWithoutDiacriticsFromString:(id)arg1 ;
+(id)stopWordsForLanguageCode:(id)arg1 ;
+(id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)_englishStopWords;
+(id)_frenchStopWords;
+(id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3 ;
+(id)tokensFromString:(id)arg1 options:(long long)arg2 ;
+(id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3 ;
+(id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2 ;
+(BOOL)nlpSearchSupportsLocale:(id)arg1 ;
@end

