/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _tokenDetailMap;
	NSMutableDictionary* _detailTokenMap;

}
+(id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)matchedDetailsForToken:(id)arg1 ;
-(id)tokensForDetail:(id)arg1 ;
-(void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3 ;
-(id)_contactDetailFromContact:(id)arg1 column:(unsigned)arg2 detailEntityId:(id)arg3 ;
-(BOOL)isEqualToMatchedDetails:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

