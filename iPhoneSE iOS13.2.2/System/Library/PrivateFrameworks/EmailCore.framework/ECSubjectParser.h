/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECSubjectParser : NSObject
+(unsigned long long)prefixLengthForSubject:(id)arg1 ;
+(id)subjectWithoutPrefixForSubject:(id)arg1 ;
+(id)subjectWithoutPrefixForSubject:(id)arg1 prefix:(id*)arg2 ;
+(BOOL)subjectHasReplyPrefix:(id)arg1 ;
+(unsigned long long)prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)arg1 ;
+(unsigned long long)_fastPrefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(unsigned long long)_prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2 ;
+(id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)arg1 prefix:(id*)arg2 ;
@end
