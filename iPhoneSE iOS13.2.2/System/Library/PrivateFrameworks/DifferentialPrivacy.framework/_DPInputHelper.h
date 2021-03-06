/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter;

@interface _DPInputHelper : NSObject {

	NSNumberFormatter* _fmt;

}

@property (nonatomic,readonly) NSNumberFormatter * fmt;              //@synthesize fmt=_fmt - In the implementation block
-(id)init;
-(id)numberFromString:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 separatedBy:(id)arg2 encoding:(unsigned long long)arg3 ;
-(id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 ;
-(id)nonEmptyStringsFromFileAtPath:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)numbersFromFileAtPath:(id)arg1 ;
-(NSNumberFormatter *)fmt;
@end

