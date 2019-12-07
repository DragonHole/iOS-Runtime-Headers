/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHTTPURLResponse, NSData;

@interface _SFSearchResult : NSObject {

	NSHTTPURLResponse* _response;
	NSData* _data;
	long long _searchType;

}

@property (nonatomic,readonly) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long searchType;                      //@synthesize searchType=_searchType - In the implementation block
-(id)description;
-(NSData *)data;
-(NSHTTPURLResponse *)response;
-(long long)searchType;
-(id)initWithVoiceSearchResult:(id)arg1 ;
@end
