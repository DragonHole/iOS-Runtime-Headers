/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardDateScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}

@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)scannerWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isAtEnd;
-(unsigned long long)position;
-(unsigned short)nextCharacter;
-(unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1 ;
-(long long)scanComponentValueOfLength:(unsigned long long)arg1 ;
-(long long)scanCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)scanLeapMarker;
@end

