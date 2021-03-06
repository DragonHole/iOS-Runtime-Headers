/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNTimeProvider;
@class NSMutableString, NSNumber, NSString;

@interface CNAutocompleteStoreReproStringRecorder : NSObject {

	id<CNTimeProvider> _timeProvider;
	NSMutableString* _reproStringStorage;
	NSNumber* _lastTimestamp;
	NSString* _lastString;

}

@property (readonly) id<CNTimeProvider> timeProvider;                    //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) NSMutableString * reproStringStorage;               //@synthesize reproStringStorage=_reproStringStorage - In the implementation block
@property (copy) NSNumber * lastTimestamp;                               //@synthesize lastTimestamp=_lastTimestamp - In the implementation block
@property (copy) NSString * lastString;                                  //@synthesize lastString=_lastString - In the implementation block
@property (nonatomic,copy,readonly) NSString * reproString; 
-(id)init;
-(id)description;
-(void)clear;
-(void)setLastTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)lastTimestamp;
-(id<CNTimeProvider>)timeProvider;
-(id)initWithTimeProvider:(id)arg1 ;
-(void)recordString:(id)arg1 ;
-(NSMutableString *)reproStringStorage;
-(void)setLastString:(NSString *)arg1 ;
-(id)stringForIntervalSinceLastTimestamp:(double)arg1 ;
-(id)stringForKeystrokesSinceLastString:(id)arg1 ;
-(NSString *)lastString;
-(NSString *)reproString;
@end

