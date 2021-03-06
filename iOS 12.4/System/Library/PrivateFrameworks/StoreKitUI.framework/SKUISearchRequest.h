/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying> {

	NSNumber* _searchHintIndex;
	NSString* _searchHintOriginalTerm;
	NSString* _term;
	NSURL* _url;

}

@property (nonatomic,copy) NSNumber * searchHintIndex;                     //@synthesize searchHintIndex=_searchHintIndex - In the implementation block
@property (nonatomic,copy) NSString * searchHintOriginalTerm;              //@synthesize searchHintOriginalTerm=_searchHintOriginalTerm - In the implementation block
@property (nonatomic,copy) NSString * term;                                //@synthesize term=_term - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(void)setTerm:(NSString *)arg1 ;
-(void)setSearchHintOriginalTerm:(NSString *)arg1 ;
-(void)setSearchHintIndex:(NSNumber *)arg1 ;
-(NSNumber *)searchHintIndex;
-(NSString *)searchHintOriginalTerm;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)term;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
@end

