/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentSlotDescriptionExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying> {

	BOOL _isExtended;
	BOOL _isPrivate;
	NSString* _name;
	unsigned long long _tag;
	NSString* _facadePropertyName;
	NSString* _dataPropertyName;
	long long _valueType;
	long long _valueStyle;
	NSArray* _resolveSelectorStrings;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long tag;                             //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) NSString * facadePropertyName;                 //@synthesize facadePropertyName=_facadePropertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataPropertyName;                   //@synthesize dataPropertyName=_dataPropertyName - In the implementation block
@property (nonatomic,readonly) long long valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) long long valueStyle;                               //@synthesize valueStyle=_valueStyle - In the implementation block
@property (nonatomic,readonly) BOOL isExtended;                                    //@synthesize isExtended=_isExtended - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                     //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,readonly) SEL resolveSelector; 
@property (nonatomic,readonly) SEL deprecatedResolveSelector; 
@property (nonatomic,copy,readonly) NSArray * resolveSelectorStrings;              //@synthesize resolveSelectorStrings=_resolveSelectorStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)valueType;
-(id)valueForSlotComposer:(id)arg1 ;
-(void)setValue:(id)arg1 forSlotComposer:(id)arg2 ;
-(NSString *)facadePropertyName;
-(id)localizeValue:(id)arg1 forLanguage:(id)arg2 ;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(BOOL)arg5 isPrivate:(BOOL)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 resolveSelectors:(SEL)arg9 ;
-(BOOL)isPrivate;
-(long long)valueStyle;
-(NSArray *)resolveSelectorStrings;
-(NSString *)dataPropertyName;
-(SEL)resolveSelector;
-(SEL)deprecatedResolveSelector;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelectors:(SEL)arg9 ;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelector:(SEL)arg9 deprecatedResolveSelector:(SEL)arg10 ;
-(id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelector:(SEL)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)tag;
-(BOOL)isExtended;
@end

