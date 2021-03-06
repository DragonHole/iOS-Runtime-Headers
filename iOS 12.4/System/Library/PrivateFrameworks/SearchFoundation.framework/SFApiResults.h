/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFApiResults.h>
@class NSArray, NSDictionary, NSData;


@protocol SFApiResults <NSObject>
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,copy) NSArray * flights; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)resultType;
-(void)setFlights:(id)arg1;
-(NSArray *)flights;
-(void)setResultType:(int)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding, NSCopying> {

	SCD_Struct_SF10 _has;
	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                                        //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(int)resultType;
-(BOOL)hasResultType;
-(BOOL)hasStatus;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setFlights:(NSArray *)arg1 ;
-(NSArray *)flights;
-(void)setResultType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(NSData *)jsonData;
@end

