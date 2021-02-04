/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PHNetwork : NSObject {

	NSString* _name;
	unsigned long long _state;
	NSDictionary* _dictionaryRepresentation;

}

@property (retain) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (readonly) NSString * code; 
+(id)networkFromDictionary:(id)arg1 ;
-(void)setDictionaryRepresentation:(NSDictionary *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)code;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithName:(id)arg1 ;
-(NSString *)displayName;
@end
