/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EFPrivacy : NSObject
+(id)ec_partiallyRedactedStringForSubjectOrSummary:(id)arg1 ;
+(id)ec_partiallyRedactedStringForAddress:(id)arg1 localPart:(id)arg2 domain:(id)arg3 ;
+(id)ec_redactedStringForMailboxURL:(id)arg1 ;
+(id)partiallyRedactedStringForString:(id)arg1 ;
+(id)fullyRedactedStringForString:(id)arg1 ;
+(id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(unsigned long long)arg2 ;
+(id)dateByRemovingTimeComponentsFromDate:(id)arg1 ;
+(long long)weeksSinceDate:(id)arg1 ;
+(unsigned)bucketMessageCount:(unsigned long long)arg1 ;
@end

