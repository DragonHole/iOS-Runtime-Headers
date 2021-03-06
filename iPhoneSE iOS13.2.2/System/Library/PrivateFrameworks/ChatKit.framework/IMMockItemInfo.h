/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IMMockItemInfo : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL outgoing;               //@synthesize outgoing=_outgoing - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultMockInfoArray;
+(id)encodedMockItemInfoArray:(id)arg1 ;
+(id)decodedMockItemInfoArray:(id)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)outgoing;
-(id)initWithMockItemType:(long long)arg1 outgoing:(BOOL)arg2 ;
@end

