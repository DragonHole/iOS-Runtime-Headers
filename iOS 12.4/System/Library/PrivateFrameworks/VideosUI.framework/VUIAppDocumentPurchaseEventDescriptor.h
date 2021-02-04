/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor {

	NSString* _canonicalID;

}

@property (nonatomic,copy) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
-(id)initWithEventType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)canonicalID;
-(void)setCanonicalID:(NSString *)arg1 ;
-(id)initWithCanonicalID:(id)arg1 ;
@end
