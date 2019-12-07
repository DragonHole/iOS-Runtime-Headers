/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface FPXIndexState : NSObject {

	NSData* _lastPage;
	NSData* _lastChangeToken;

}

@property (nonatomic,readonly) unsigned long long phase; 
@property (nonatomic,readonly) NSData * lastPage;                        //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,readonly) NSData * lastChangeToken;                 //@synthesize lastChangeToken=_lastChangeToken - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)stateWithData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)dataRepresentation;
-(unsigned long long)phase;
-(NSData *)lastPage;
-(id)initWithPage:(id)arg1 changeToken:(id)arg2 ;
-(NSData *)lastChangeToken;
-(id)initWithChangeToken:(id)arg1 ;
@end
