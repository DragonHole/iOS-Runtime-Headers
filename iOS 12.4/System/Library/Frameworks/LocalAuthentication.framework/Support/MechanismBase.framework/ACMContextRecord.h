/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextExternalizationProt;
#import <MechanismBase/MechanismBase-Structs.h>
@interface ACMContextRecord : NSObject {

	unsigned _passphrasePurpose;
	ACMHandleRef _context;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	unsigned long long _flags;

}

@property (nonatomic,readonly) ACMHandleRef context;                                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                                             //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned passphrasePurpose;                                                           //@synthesize passphrasePurpose=_passphrasePurpose - In the implementation block
-(unsigned long long)flags;
-(void)setFlags:(unsigned long long)arg1 ;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(id)initWithACMContext:(ACMHandleRef)arg1 cachedExternalizationDelegate:(id)arg2 ;
-(unsigned)passphrasePurpose;
-(void)setPassphrasePurpose:(unsigned)arg1 ;
-(ACMHandleRef)context;
@end

