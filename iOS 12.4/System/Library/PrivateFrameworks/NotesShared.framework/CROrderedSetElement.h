/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CREquatable.h>

@protocol CRDataTypeCRCoding;
@class CRRegisterLatest, NSString;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable> {

	id<CRDataType><CRCoding> _value;
	CRRegisterLatest* _index;

}

@property (nonatomic,retain) id<CRDataType><CRCoding> value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) CRRegisterLatest * index;                    //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)temporaryElementWithValue:(id)arg1 ;
-(id)tombstone;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithProtobufSetElement:(const Dictionary_Element*)arg1 decoder:(id)arg2 ;
-(void)encodeIntoProtobufSetElement:(Dictionary_Element*)arg1 coder:(id)arg2 ;
-(void)mergeWith:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CRDataType><CRCoding>)value;
-(void)setValue:(id<CRDataType><CRCoding>)arg1 ;
-(CRRegisterLatest *)index;
-(void)setIndex:(CRRegisterLatest *)arg1 ;
-(void)setDocument:(id)arg1 ;
@end

