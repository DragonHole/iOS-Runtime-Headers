/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MFEmailSetEmail : NSObject {

	unsigned long long _hash;
	NSString* _encodedAddress;
	NSString* _comment;

}

@property (nonatomic,readonly) unsigned long long hash; 
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,readonly) NSString * commentedAddress; 
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)commentedAddress;
-(BOOL)isEqualToEmail:(id)arg1 ;
@end
