PUBLIC picbootstrap_start
PUBLIC picbootstrap_end

.code picbootstrap

picbootstrap_start PROC
    ; Start by getting RIP
    call GET_RIP_STUB
    GET_RIP_STUB:
        pop rax
picbootstrap_start ENDP

picbootstrap_end PROC
    nop
picbootstrap_end ENDP

END
