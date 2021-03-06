/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDocument, NSMapTable, NSString;

@interface CRDictionary : NSObject <CRDataType, NSFastEnumeration, CRCoding> {

	CRDocument* _document;
	NSMapTable* _contents;
	long long _removeClock;

}

@property (nonatomic,retain) NSMapTable * contents;                     //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) long long removeClock;                     //@synthesize removeClock=_removeClock - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 dictionary:(Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 dictionary:(Dictionary*)arg2 elementValueCoder:(/*^block*/id)arg3 ;
-(id)initWithCRCoder:(id)arg1 dictionary:(const Dictionary*)arg2 ;
-(id)initWithCRCoder:(id)arg1 dictionary:(const Dictionary*)arg2 elementValueDecoder:(/*^block*/id)arg3 ;
-(void)setRemoveClock:(long long)arg1 ;
-(long long)removeClock;
-(void)mergeWithDictionary:(id)arg1 ;
-(void)enumerateKeysObjectsAndTimestampsUsingBlock:(/*^block*/id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR15*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(NSMapTable *)contents;
-(void)setContents:(NSMapTable *)arg1 ;
-(id)keyEnumerator;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
@end

