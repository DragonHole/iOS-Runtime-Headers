/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest {

	BOOL _shouldParseResponse;

}

@property (assign,nonatomic) BOOL shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(BOOL)shouldParseResponse;
-(void)setShouldParseResponse:(BOOL)arg1 ;
@end

