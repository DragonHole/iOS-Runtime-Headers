/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSSet, NSArray, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _entries;
	NSMutableArray* _pendingEntries;
	NSSet* _recipientIdentifiers;
	NSSet* _senderIdentifiers;

}

@property (nonatomic,readonly) NSArray * entries;                                    //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) NSArray * pendingEntries;                             //@synthesize pendingEntries=_pendingEntries - In the implementation block
@property (nonatomic,readonly) NSSet * senderIdentifiers;                            //@synthesize senderIdentifiers=_senderIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * recipientIdentifiers;                         //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * aggregateText; 
@property (nonatomic,readonly) NSString * mostRecentNonSenderTextEntry; 
@property (nonatomic,readonly) BOOL mostRecentTextEntryIsByMe; 
@property (nonatomic,readonly) NSString * mostRecentTextEntryLogString; 
@property (nonatomic,readonly) NSString * senderIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)_enumerateAllEntriesAsInputContextEntries:(/*^block*/id)arg1 ;
-(void)enumerateAllEntries:(/*^block*/id)arg1 ;
-(NSString *)aggregateText;
-(BOOL)mostRecentTextEntryIsByMe;
-(NSArray *)pendingEntries;
-(void)enumeratePendingEntries:(/*^block*/id)arg1 ;
-(void)appendPendingEntriesFromInputContextHistory:(id)arg1 ;
-(NSString *)mostRecentNonSenderTextEntry;
-(NSString *)mostRecentTextEntryLogString;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)entries;
-(void)assertCheckpointForCoding;
-(BOOL)hasPendingEntries;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2 ;
-(id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2 ;
-(NSSet *)recipientIdentifiers;
-(NSSet *)senderIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSString *)senderIdentifier;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
@end

